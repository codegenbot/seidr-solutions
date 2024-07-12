def filter_strings(input_list):
    prefix = input("Enter a prefix to filter: ")
    result = [s for s in input_list if s.startswith(prefix)]
    print(result)