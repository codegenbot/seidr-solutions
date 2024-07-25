try:
    print("Enter space-separated integers:")
    numbers = list(map(int, input().split()))

    total = sum(numbers)
    print(total)

except (ValueError, EOFError) as e:
    print(f"Invalid input: {e}")