```
num = int(input("Enter a number: "))
result = [factor for sublist in factorize(int(input("Enter a number: "))) for factor in sublist]
print(result)