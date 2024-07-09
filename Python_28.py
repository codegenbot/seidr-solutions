def concatenate_strings():
    input_list = []

    while True:
        user_input = input("Enter a string (or 'stop' to finish): ")

        if user_input.lower() == "stop":
            break

        input_list.append(user_input)

    print(concatenate(input_list))