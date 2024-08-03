```
def indices_of_substring(text):
    try:
        target = int(input())
        if text.index(str(target)) == -1:
            print('0')
        else:
            start_index = 0
            indices = []
            while True:
                start_index = text.find(str(target), start_index)
                if start_index == -1:
                    break
                indices.append(start_index)
                start_index += 1
            return indices
    except ValueError:
        target = input()
        index = 0
        indices = [index]
        while True:
            index = text.find(target, index + 1)
            if index == -1:
                break
            indices.append(index)
        return indices