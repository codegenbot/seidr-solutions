```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

if __name__ == "__main__":
    n1 = int(input())
    n2 = int(input())
    print(gcd(n1, n2))
    
    t = input()
    s = input()
    print(indices_of_substring(t, s))