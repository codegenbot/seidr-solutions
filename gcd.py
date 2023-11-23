a, b = map(int, input().split())

result = gcd(a, b)
print(result)

text, target = input().split()

indices_result = indices_of_substring(text, target)
print(indices_result)