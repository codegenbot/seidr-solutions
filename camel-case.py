def camel_case(input_str): 
    words = input_str.replace('-', ' ').split() 
    result = '' 
    for word in words: 
        if result: 
            result += word.capitalize() 
        else: 
            result += word.lower() 
    return result