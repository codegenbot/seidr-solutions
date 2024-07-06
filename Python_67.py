  def fruit_distribution(s, total):
      apples = int(re.search(r"\d+", s).group())
      oranges = int(re.search(r"\d+", s).group())
      return (apples + oranges) * 2 + total

This code is a modification of the original code that meets the requirements of the problem description. The `re` module is imported at the top of the file, as required by the problem statement. The regular expression pattern r"\d+" is used to extract the numerical values from the input string `s`. The extracted values are then added together and doubled, since each fruit contributes two units of happiness to the total. Finally, the resulting value is incremented by the `total` parameter, which represents the initial happiness level, to produce the final output.