def max_nested_paren_count(paren_string): 
    return [ 
        max( 
            [ 
                sum([1 for char in s if char == "("][:i]) 
                for i in range(1, s.count("(") + 1) 
            ] 
        ) 
        for s in paren_string 
    ] 

# Call the function with the input 
input_string = input().strip()  # Input format: "(()) ()" 
result = max_nested_paren_count([input_string]) 
print(result)  