```
def find_gcd(a: int, b: int) -> int:
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text: str, target: str) -> list:
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

print(find_gcd(1, 1))
print(find_indices("banana", "ana"))
print(find_gcd(4, 400000))
print(find_indices("hello world hello", "ello"))
print(find_gcd(54, 24))
print(find_indices("abcdefg", "cde"))
print(find_gcd(4200, 3528))
print(find_indices("abcdefghijklmnopqrstuvwxyz", "abc"))