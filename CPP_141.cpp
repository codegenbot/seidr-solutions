// Check the conditions for a valid file name
  int digitCount = 0;
  int dotIndex = -1;
  for (int i = 0; i < file_name.length(); i++) {
    if (file_name[i] >= '0' && file_name[i] <= '9') {
      digitCount++;
    } else if (file_name[i] == '.') {
      if (dotIndex != -1) // Check if there are more than one dot
        return "No";
      dotIndex = i;
    } else if (i == 0 && ((file_name[i] >= 'a' && file_name[i] <= 'z') || 
                         (file_name[i] >= 'A' && file_name[i] <= 'Z'))) {
      continue;
    } else if (file_name[i] == 't' && file_name.length() > i + 2 &&
               file_name.substr(i, 3) == "txt") {
      if (digitCount <= 3 && dotIndex != -1 && dotIndex != file_name.length() - 4)
        return "Yes";
    } else if ((file_name[i] == 'e' || file_name[i] == 'd') && file_name.length() > i + 2 &&
               (file_name.substr(i, 3) == "exe" || file_name.substr(i, 3) == "dll")) {
      if (digitCount <= 3 && dotIndex != -1 && dotIndex != file_name.length() - 4)
        return "Yes";
    }

    if (digitCount > 3 || dotIndex == -1)
      return "No";
  }
  return "No";
}