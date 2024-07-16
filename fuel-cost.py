def calculate_fuel(amount):
    return amount // 3 - 2

vector = list(map(int, input().replace(' ', '').replace(',', '').split()))
print(sum(calculate_fuel(i) for i in vector))