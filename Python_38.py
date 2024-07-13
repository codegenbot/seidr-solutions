```
def decode_cyclic():
    while True:
        s = str(input('Enter the cyclic string: '))
        if len(set(s)) == len(s):  
            return ''.join(c for i, c in enumerate(s) for _ in range(i+1)) + s[i:]
        print("Invalid input. Please enter a cyclic string.")