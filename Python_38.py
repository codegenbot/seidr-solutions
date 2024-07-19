while True:
    try:
        print("Enter space-separated integers:")
        user_input = input().strip()
        if not user_input:
            break
        input_list = list(map(int, user_input.split()))
        even_sum = sum(num for num in input_list if num % 2 == 0)
        print(even_sum)
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")
    except EOFError:
        break