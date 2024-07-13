Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    target_length = len(target)
    text_length = len(text)
    
    for i in range(text_length - target_length + 1):
        if text[i:i+target_length] == target:
            indices.append(i)
            
    return indices