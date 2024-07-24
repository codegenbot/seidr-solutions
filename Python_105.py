def twenty_nine_numbers(arr):
    name_dict = {"1": "One", "2": "Two", "3": "Three", "4": "Four", 
                 "5": "Five", "6": "Six", "7": "Seven", "8": "Eight", 
                 "9": "Nine", "10": "Ten", "11": "Eleven", "12": "Twelve", 
                 "13": "Thirteen", "14": "Fourteen", "15": "Fifteen", 
                 "16": "Sixteen", "17": "Seventeen", "18": "Eighteen", 
                 "19": "Nineteen"}
    return [''.join([name_dict[i] if i < 10 else name_dict[int(i)] for i in [str(i) for i in arr if 1 <= int(i) <= 19]]).replace("Twenty", "Tw").replace("Eighteen", "Eight")