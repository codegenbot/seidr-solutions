```
def calculate_fuel(amount):
    return (amount // 3) - 2

vector = [int(x) for x in input().replace(" ", ",").split(",")]
print(sum(calculate_fuel(int(i)) for i in vector))