def main():
    def indices_of_substring(text, target):
        result = []
        i = 0
        while i < len(text):
            pos = text.find(target, i)
            if pos != -1:
                result.append(pos)
                i = pos + 1  
            else:
                break 
        return result

    print(indices_of_substring(input(), input()))

if __name__ == "__main__":
    main()