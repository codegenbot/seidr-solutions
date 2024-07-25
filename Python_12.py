```
result = []  
input_strs = input().splitlines()
result = [s.strip() for s in input_strs]
if result:  
    print("The longest strings are:")
    for s in result:
        print(s)
else:
    print("No strings were entered.")