def rescale_to_unit(input_numbers=None):
    if input_numbers is None:
        input_numbers = (
            input("Enter space-separated float numbers: ")
        )

    if isinstance(input_numbers, str):
        number_list = [
            float(x)
            for x in input_numbers.split()
            if x.replace(".", "", 1).replace("-", 1).isnumeric()
        ]
    else:
        number_list = [float(x) for x in input_numbers]

    while True:
        try:
            result = [(x - min(number_list)) / (max(number_list) - min(number_list)) for x in number_list]
            return result
        except ValueError as e:
            print(f"Invalid input. {str(e)}. Try again!")