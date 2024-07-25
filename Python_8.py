numbers_str = input()  
numbers = [ 
    int(num) 
    for num in numbers_str.split() 
    if num.replace("-", "", 1).replace(".", "").isdigit() 
    or num.startswith("-.") and num[2:].isdigit() 
]