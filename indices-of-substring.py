def indices_of_substring():
    def find_indices(text, target):
        result = []
        i = text.find(target) 
        while True:
            if i == -1:
                break
            result.append(i) 
            i = text.find(target, i + len(target))
        return result

    text = input()
    target = input()  
    print(find_indices(text, target))