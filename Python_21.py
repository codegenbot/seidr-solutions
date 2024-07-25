def rescale_to_unit(input_numbers=None):
    while True:
        numbers = input("Enter space-separated float numbers: ")
        try:
            number_list = [float(x) for x in numbers.split() if x.replace('.', '', 1).replace('-', 1).isnumeric()]
            result = [(x - min(number_list)) / (max(number_list) - min(number_list))
                      for x in number_list]
            while True:
                cont = input("Do you want to continue? (yes/no): ")
                if cont.lower() == 'no':
                    if input_numbers is None:
                        return result
                    else:
                        return [i for i in result if i not in input_numbers]
                elif cont.lower() == 'yes':
                    break
                else:
                    print("Invalid input. Please enter yes or no.")
        except ValueError:
            print("Invalid input. Try again!")