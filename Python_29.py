def filter_by_prefix() -> List[str]:
    filtered_strings = []
    while True:
        user_input = input("Enter a list of strings (space-separated): ")
        strings = [s.strip() for s in user_input.split()]
        
        while True:  
            prefix = input("Enter a prefix: ")
            if not prefix:  
                raise ValueError("Please enter valid prefix!")
            break
        
        filtered_strings = [s for s in strings if s.startswith(prefix)]
        print(filtered_strings)
    return filtered_strings