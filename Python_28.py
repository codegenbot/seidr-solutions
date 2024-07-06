class Concatenator:
    def concatenate(self, strings_list: List[str]) -> str:
        result = ""
        while True:
            s = input("Enter a string (or 'stop' if finished): ")
            if s.lower() == "stop":
                break
            result += s + " "
        return result.strip()