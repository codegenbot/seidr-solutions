```
def count_nums():
    arr = list(map(int, input("Enter space-separated numbers: ").split()))
    return sum(1 for num in arr if sum(int(d) if d != '-' else -int(d) for d in str(num).replace('-', '')) > 0)

print(count_nums())