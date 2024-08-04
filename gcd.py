```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text) - len(target) + 1:
        if text[index:index+len(target)] == target:
            result.append(index)
            index += 1
        else:
            index += 1
    return result

def main():
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(indices_of_substring(text, target))

if __name__ == "__main__":
    main()