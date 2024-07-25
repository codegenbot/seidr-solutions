def rescale_to_unit(input_numbers=None):
    while True:
        numbers = input("Enter space-separated float numbers: ")
        try:
            result = [(float(x) - min(map(float, numbers.split()))) / (max(map(float, numbers.split())) - min(map(float, numbers.split())))
                      for x in numbers.split()]
            if input_numbers is None:
                return result
            else:
                return [i for i in result if i not in input_numbers]
        except ValueError:
            print("Invalid input. Try again!")