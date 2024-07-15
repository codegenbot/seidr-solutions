num = float(input("Enter a number: "))

def find_zero(num: float) -> float:
    if num == 0:
        return "undefined"
    return -num

result = find_zero(num)
print(result)