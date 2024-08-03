def main():
    operations = list(map(int, input().split()))
    result = below_zero(operations)
    print(result)

if __name__ == "__main__":
    main()