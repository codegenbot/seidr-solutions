```
def filter_by_prefix() -> None:
    strings = []  
    while True:
        s = input("Enter a string (or 'done' if finished): ")
        if s.lower() == 'done':
            break
        strings.append(s)  

    prefix = input("Enter the prefix: ")

    try:
        result = [s for s in strings if s.startswith(prefix)]
        print(result)
    except ValueError:
        print("Invalid input. Please provide a list of strings and a valid prefix.")