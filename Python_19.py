def sort_numbers(user_input=""):
    numbers = user_input.split(" ")
    sorted_numbers = " ".join(map(str, sorted([int(num) for num in numbers])))
    print(sorted_numbers)