```Python
def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0])
    
    max_length = max(len(evens), len(odds))
    result = []
    
    for _ in range(max_length):
        result.append(evens.pop(0) if evens else 0)
        result.append(odds.pop(0) if odds else 0)
        
    return result