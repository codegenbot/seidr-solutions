```
fruit_list = input("Enter the list of fruits: ")
amount = int(input("Enter the amount: "))

if not fruit_list or not amount:
    print("Invalid inputs. Please try again.")
else:
    if ',' not in fruit_list or len(fruit_list) > 100:
        print("Invalid input format. Please enter a list of at most 100 fruits separated by commas.")
    else:
        print(fruit_distribution(fruit_list, amount))