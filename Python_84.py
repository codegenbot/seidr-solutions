def ladderLength(start, end, dict):
    if start == end:
        return 1
    
    queue = [(start, 1)]
    visited = {start}
    
    while queue:
        word, length = queue.pop(0)
        
        for i in range(len(word)):
            left, right = word[:i], word[i + 1:]
            
            for j in [left, right]:
                for c in 'abcdefghijklmnopqrstuvwxyz':
                    new_word = j + c + (right if len(j) > len(right) else left)
                    
                    if new_word == end:
                        return length + 1
                    elif new_word not in visited and new_word in dict:
                        queue.append((new_word, length + 1))
                        visited.add(new_word)
    return 0