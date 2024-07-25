def rescale_to_unit(input_numbers=None):
    while True:
        numbers = input("Enter space-separated float numbers: ")
        try:
            number_list = [float(x) for x in numbers.split() if x.replace('.', '', 1).replace('-', 1).isnumeric()]
            if input_numbers is not None and sorted(number_list) != sorted(input_numbers):
                print("Invalid input. Please enter the same set of numbers as previously.")
                continue
            result = [(x - min(number_list)) / (max(number_list) - min(number_list))
                      for x in number_list]
            return result
        except ValueError:
            print("Invalid input. Try again!")