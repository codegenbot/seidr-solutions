```
def secure_code():
    digits = list(input("Enter the digits separated by spaces: ").split())
    return " ".join(map(str, sorted(digits)))

print(secure_code())