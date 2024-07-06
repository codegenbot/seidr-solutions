def words_string(s):
   inp = input("Enter a string: ")
   words = re.split(r"\s+", inp)
   if len(words) == 1:
       return f"The string contains one word."
   else:
       return f"The string contains {len(words)} words."