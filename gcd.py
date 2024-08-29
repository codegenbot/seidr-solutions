try:
    a = int(input())
    b = int(input())

    print(gcd(a, b))

    text = input()
    target = input()

    print(indices_of_substring(text, target))
except ValueError:
    print("Invalid input. Please enter valid integers for GCD calculation.")
except Exception as e:
    print(f"An error occurred: {str(e)}")