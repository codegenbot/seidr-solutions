```
result = []  
input_strs = input("Enter some strings (separated by spaces): ")
result = [s.strip() for s in input_strs.split()]
if result:  
    print("The longest strings are:")
    for s in result:
        print(s)
else:
    print("No strings were entered.")