try:
    a, b, c = map(int, input().split())
    print(a + b + c)
except ValueError:
    print("Error: Invalid input. Please enter 3 integers separated by spaces.")
except (EOFError, ValueError):
    print(
        "Error: Insufficient input provided. Please enter 3 integers separated by spaces."
    )
except Exception as e:
    print(f"Error: {e}. Please enter 3 integers separated by spaces.")