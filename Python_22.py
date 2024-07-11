def get_values() -> List[int]:
    result = []
    while True:
        values = input("Enter some values (separated by space), 'stop' to finish: ")
        if values.lower() == 'stop':
            break
        for value in values.split():
            if value.isdigit():
                result.append(int(value))
            else:
                print(f"Invalid input: {value}. Please enter integers only.")
        if all(
            val.replace(".", "", 1).replace("-", "", 1).isdigit()
            for val in values.split()
        ):
            break
    return result