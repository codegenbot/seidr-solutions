```
def fuel_cost():
    return sum((i//3)-2 for i in map(int, input().split()))

if __name__ == "__main__":
    print(fuel_cost())