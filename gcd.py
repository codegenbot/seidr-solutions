while True:
    try:
        a = int(input())
        b = int(input())
        text = input()
        target = input()
        break
    except ValueError:
        print("Invalid input. Please enter valid integers and strings.")

print(gcd(a, b))
print(find_indices(text, target))