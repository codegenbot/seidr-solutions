while True:
    try:
        print("Enter space-separated integers (or press Enter to exit):")
        user_input = input().strip()
        if not user_input:
            break
        input_list = [int(num) for num in user_input.split()]
        even_sum = sum(num for num in input_list if num % 2 == 0)
        print(even_sum)
    except (ValueError, KeyboardInterrupt):
        print("Invalid input. Please enter space-separated integers.")
    except EOFError:
        print("Invalid input. Exiting program.")
        break