while True:
    try:
        n = int(input())
        if n % 2 == 0:
            print("Even")
        else:
            print("Odd")
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
    except Exception as e:
        print(f"Error: {e}. Please enter a valid integer.")