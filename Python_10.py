def make_palindrome(s):
    if s == s[::-1]:
        return s
    
    for char in "abcdefghijklmnopqrstuvwxyz":
        left_to_right = s
        right_to_left = list(s)
        
        while '' in right_to_left:
            right_to_left.remove('')
        
        i, j = 0, len(left_to_right) - 1
        new_string = ''
        
        while i <= j:
            new_string += left_to_right[i]
            i += 1
            j -= 1
        
        if char != '':
            new_string += char
            
        new_string += ''.join(reversed(right_to_left))
        
        if new_string == new_string[::-1]:
            return new_string
    
    return s