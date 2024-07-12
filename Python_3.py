def below_zero(operations):
    return sum(1 for num in operations if num < 0)

if __name__ == "__main__":
    operations = list(map(int, input().strip().split()))
    print(below_zero(operations))