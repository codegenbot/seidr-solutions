```
def secure_code():
    digits = list(input("Enter the digits separated by spaces: ").split())
    return " ".join(sorted(set(map(int, digits))))

print(secure_code())