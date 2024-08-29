try:
    a = int(input())
    b = int(input())

    if a < 0 or b < 0:
        print("Invalid input. Please enter non-negative integers for GCD calculation.")
    else:
        print(gcd(a, b))

    text = input()
    target = input()

    print(indices_of_substring(text, target))
except ValueError:
    print("Invalid input. Please enter valid integers and strings for GCD calculation.")
except Exception as e:
    print(f"An error occurred: {str(e)}")