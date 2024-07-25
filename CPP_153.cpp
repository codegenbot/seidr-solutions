string strongestExtension = "";
	int maxStrength = INT_MIN;
	for (const string& extension : extensions) {
		int capCount = 0, smCount = 0;
		for (char c : extension) {
			if (isupper(c)) {
				capCount++;
			} else if (islower(c)) {
				smCount++;
			}
		}
		int strength = capCount - smCount;
		if (strength > maxStrength || (strength == maxStrength && extension < strongestExtension)) {
			maxStrength = strength;
			strongestExtension = extension;
		}
	}
	return class_name + "." + strongestExtension;