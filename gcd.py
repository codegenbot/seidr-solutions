Here is the solution for the problem:

```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    current_index = 0
    
    while current_index < len(text):
        pos = text.find(target)
        
        if pos == -1:
            break
        
        result.append(pos + 1)
        current_index += pos + len(target)

    return result

# test cases
print(gcd(1, 1)) 
print(indices_of_substring("banana", "ana"))