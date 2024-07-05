    def camel_case(s):
        return "".join(word.capitalize() if not word or word[0].isalpha() else word[0].upper() + word[1:].lower()
                      for word in s.replace("-", " ").split())