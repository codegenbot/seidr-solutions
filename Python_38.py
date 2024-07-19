while True:
    try:
        print("Enter space-separated integers:")
        input_list = list(map(int, input().strip().split()))
        even_sum = sum(num for num in input_list if num % 2 == 0)
        print(even_sum)
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")
    except EOFError:
        print("No input provided. Exiting.")
        break